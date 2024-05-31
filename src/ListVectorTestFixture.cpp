//
// Created by Gregory Johnson on 5/1/24.
//

#include "Tests/ListVectorTestFixture.h"

bool ListVectorTestFixture::TestListVectorReturnsCorrectNumberOfBins(const std::vector<std::string>& mockListOfSequences,
    const int expectedResult) {
    Setup();
    for (const auto& sequences: mockListOfSequences) {
        listVector->push_back(sequences);
    }
    const bool result = listVector->getNumBins() == expectedResult;
    TearDown();
    return result;
}

bool ListVectorTestFixture::TestListVectorReturnsCorrectNumSeqs(const std::vector<std::string> &mockListOfSequences,
    const int expectedResult) {
    Setup();
    for (const auto& sequences: mockListOfSequences) {
        listVector->push_back(sequences);
    }
    const bool result = listVector->getNumSeqs() == expectedResult;
    TearDown();
    return result;
}

bool ListVectorTestFixture::TestListVectorReturnsCorrectMaxRank(const std::vector<std::string> &mockListOfSequences,
    const int expectedResult) {
    Setup();
    for (const auto& sequences: mockListOfSequences) {
        listVector->push_back(sequences);
    }
    const bool result = listVector->getMaxRank() == expectedResult;
    TearDown();
    return result;
}

bool ListVectorTestFixture::TestListVectorReturnsCorrectGetValue(const std::vector<std::string> &mockListOfSequences,
    const int index, const std::string &expectedResult) {
    Setup();
    for (const auto& sequences: mockListOfSequences) {
        listVector->push_back(sequences);
    }
    const bool result = listVector->get(index) == expectedResult;
    TearDown();
    return result;
}

bool ListVectorTestFixture::TestListVectorReturnsCorrectGetLabelsValue(
    const std::vector<std::string> &mockListOfSequences, const int expectedResult) {
    Setup();
    for (const auto& sequences: mockListOfSequences) {
        listVector->push_back(sequences);
    }
    const bool result = listVector->getLabels().size() == expectedResult;
    TearDown();
    return result;
}

bool ListVectorTestFixture::TestListVectorReturnsCorrectGetOtuNames(const std::vector<std::string> &mockListOfSequences,
    const int binToTest, const std::string &expectedResult) {
    Setup();
    for (const auto& sequences: mockListOfSequences) {
        listVector->push_back(sequences);
    }
    const bool result = listVector->getOTUName(binToTest) == expectedResult;
    TearDown();
    return result;
}

bool ListVectorTestFixture::TestListVectorSetsLabelsCorrectly(const std::vector<std::string> &mockListOfLabels,
    const int expectedResult) {
    Setup();
    listVector->setLabels(mockListOfLabels);
    const bool result = listVector->getLabels().size() == expectedResult;
    TearDown();
    return result;
}

bool ListVectorTestFixture::TestListVectorSetsPrintedLabelsCorrectly(const bool mockValue, const bool expectedResult) {
    Setup();
    const bool result = expectedResult == listVector->setPrintedLabels(mockValue);
    TearDown();
    return result;
}

bool ListVectorTestFixture::TestListVectorPushBackSetsDataCorrectly(const std::vector<std::string>& mockListOfSequences,
        const int index, const std::string& expectedResult) {
    Setup();
    for (const auto& sequences: mockListOfSequences) {
        listVector->push_back(sequences);
    }
    const bool result =listVector->get(index) == expectedResult;
    TearDown();
    return result;

}

bool ListVectorTestFixture::TestListVectorPrintDisplaysDataCorrectly(
    const std::vector<std::string> &mockListOfSequences, const std::string& expectedResult) {
    Setup();
    std::ofstream stream;
    for (const auto& sequences: mockListOfSequences) {
        listVector->push_back(sequences);
    }
    // Get rid of ofstream in listVector
    const bool result =listVector->print(stream) == expectedResult;
    TearDown();
    return result;
}


bool ListVectorTestFixture::TestListVectorReturnsCorrectGetOtuNamesSize(const std::vector<std::string> &mockListOfSequences,
                                                                        const int binToTest, const int expectedResult) {
    Setup();
    for (const auto& sequences: mockListOfSequences) {
        listVector->push_back(sequences);
    }
    const bool result = listVector->getOTUName(binToTest).size() == expectedResult;
    TearDown();
    return result;
}

void ListVectorTestFixture::Setup() {
    listVector = std::make_unique<ListVector>();
}

void ListVectorTestFixture::TearDown() {
    listVector.reset();
}

#ifndef WEIGHTS_HPP
#define WEIGHTS_HPP

#include <vector>
#include <Eigen/Dense>

class Weights{
    public:
        Weights(int, int, double, double, Eigen::VectorXd, Eigen::VectorXd, Eigen::VectorXd);

        void setEta();
        void setLambda();
        void setUncertaintyWeights(Eigen::VectorXd, Eigen::VectorXd, Eigen::VectorXd);
        void setSigmaPointWeights();

        Eigen::MatrixXd P;
        Eigen::MatrixXd Q;
        Eigen::MatrixXd R;

        Eigen::VectorXd Wm;
        Eigen::MatrixXd Wc;

        double eta;

    private:
        int n_states;
        int n_measurements;
        int n_sigma;
        double alpha;
        double beta;
        double lambda;
};

#endif